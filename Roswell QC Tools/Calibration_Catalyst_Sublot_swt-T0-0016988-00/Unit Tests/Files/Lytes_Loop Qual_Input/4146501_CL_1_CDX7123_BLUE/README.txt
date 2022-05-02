Filename "4146501_CL_H44_13_BLUE.csv" was somehow added twice to the main table during the concatenate.
The inclusion of this duplicate data resulted in a miscalculation of the AR through the offline algorithm because all the data present was not unique.

This duplicate data was removed to proceed with this analysis.

Have let Nate know so he could add a duplicate data check as a feature to the loop qual tool to ensure all data is unique so that offline algorithm calculations occur correctly.

