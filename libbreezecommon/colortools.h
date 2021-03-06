#ifndef BREEZE_COLORTOOLS_H
#define BREEZE_COLORTOOLS_H

/*
 * SPDX-FileCopyrightText: 2021 Paul McAuley <kde@paulmcauley.com>
 *
 * SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
 */

#include "breezecommon_export.h"

#include <QColor>

namespace Breeze
{
    
    /**
     * @brief Functions to manipulate colours within Breeze/ClassikStyles
     *        To be used as common code base across both kdecoration and kstyle.
     */
    class BREEZECOMMON_EXPORT ColorTools
    {
    
        public:
            

            static QColor getDifferentiatedSaturatedColor( const QColor& inputColor );
            
            /**
            * @brief Checks the contrast ratio of the two given colours, and if is below the given threshold returns a higher contrast black or white foreground
            * @param foregroundColor The foreground colour to potentially replace
            * @param backgroundColor The background colour to compare with
            * @param blackWhiteContrastThreshold The contrast threshold, below which a black or white foreground colour will be returned
            * @return the higher contrast QColor
            */
            static QColor getHigherContrastForegroundColor( const QColor& foregroundColor, const QColor& backgroundColor, double blackWhiteContrastThreshold );
            
            /**
            * @brief Given a background colour, will return either a black or white foregreound colour, depending upon which gives the best contrast
            */
            static QColor getBlackOrWhiteForegroundForHighContrast( const QColor& backgroundColor );
            
        
    };
    
}

#endif
