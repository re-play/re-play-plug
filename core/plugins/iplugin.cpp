#include "iplugin.h"

namespace RePlay
{
    namespace Core
    {
        namespace Plugins
        {

            IPlugin::IPlugin(QString name, QString version)
                : pName(name), pVersion(version)
            {

            }

            /*!
             * \brief Gets the plugin name.
             * \return A string that contains the plugin name.
             */
            const QString &IPlugin::getName() const
            {
                return pName;
            }

            /*!
             * \brief Gets the plugin version.
             * \return A string that contains the plugin version.
             */
            const QString &IPlugin::getVersion() const
            {
                return pVersion;
            }

            /*!
             * \brief Gets all plugin interfaces.
             * \return A vector of interfaces.
             */
            std::vector<IPlugInterface*> IPlugin::getInterfaces()
            {
                std::vector<IPlugInterface*> interfaces;

                for (auto it = pInterfaces.begin(); it != pInterfaces.end(); it++)
                    interfaces.push_back(it->second);

                return interfaces;
            }

            /*!
             * \brief Gets a specific interface find by name.
             * \param The search name.
             * \return An interface or nullptr if not found.
             */
            IPlugInterface *IPlugin::getInterface(QString name)
            {
                if (!hasInterface(name))
                    return nullptr;

                return pInterfaces[name];
            }

            /*!
             * \brief Checks if this plugin has a specific interface.
             * \param Interface name.
             * \return True if this plugin has the specified interface, false otherwise.
             */
            bool IPlugin::hasInterface(QString name)
            {
                return pInterfaces.find(name) != pInterfaces.end();
            }

        }
    }
}
