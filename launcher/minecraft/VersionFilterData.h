#pragma once
#include <QMap>
#include <QString>
#include <QSet>
#include <QDateTime>

struct FMLlib
{
    QString filename;
    QString checksum;
};

struct VersionFilterData
{
    VersionFilterData();
    // mapping between minecraft versions and FML libraries required
    QMap<QString, QList<FMLlib>> fmlLibsMapping;
    // set of minecraft versions for which using forge installers is blacklisted
    QSet<QString> forgeInstallerBlacklist;
    // no new versions below this date will be accepted from Mojang servers
    QDateTime legacyCutoffDate;
    // Libraries that belong to LWJGL
    QSet<QString> lwjglWhitelist;
    // release date of first version to require Java 8 (17w13a)
    QDateTime java8BeginsDate;
    // release data of first version to require Java 16 (21w19a)
    QDateTime java16BeginsDate;
    // release data of first version to require Java 17 (1.18 Pre Release 2)
    QDateTime java17BeginsDate;
    // Release data of the first version to require java 21 (24w14a)
    QDateTime java21BeginsDate;
    // release date of first version to use --quickPlayMultiplayer instead of --server/--port for directly joining servers
    QDateTime quickPlayBeginsDate;
    // release date of last version to support LiteLoader (1.12.2)
    QDateTime liteLoaderEndsDate;
    // release date of first version supported by Fabric/Quilt (1.14)
    QDateTime fabricBeginsDate;
    // release date of first version supported by NeoForge (1.20.1)
    QDateTime neoForgeBeginsDate;
};
extern VersionFilterData g_VersionFilterData;
