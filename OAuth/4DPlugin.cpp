/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.c
 #	source generated by 4D Plugin Wizard
 #	Project : OAuth
 #	author : miyako
 #	12/07/03
 #
 # --------------------------------------------------------------------------------*/


#include "4DPluginAPI.h"
#include "4DPlugin.h"

#include "functions_curl.h"
#include "functions_json.h"
#include "functions_misc.h"
#include "functions_cryp.h"
#include "functions_gzip.h"

void PluginMain(int32_t selector, PA_PluginParameters params)
{
	try
	{
		int32_t pProcNum = selector;
		sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
		PackagePtr pParams = (PackagePtr)params->fParameters;

		CommandDispatcher(pProcNum, pResult, pParams); 
	}
	catch(...)
	{

	}
}

void CommandDispatcher (int32_t pProcNum, sLONG_PTR *pResult, PackagePtr pParams)
{
	switch(pProcNum)
	{
		case kInitPlugin :
			curl_global_init(CURL_GLOBAL_ALL);
			break;
			
		case kDeinitPlugin :
			curl_global_cleanup();
			break;			
			// --- cURL
			
		case 1 :
			cURL_Get_date(pResult, pParams);
			break;
			
		case 2 :
			cURL_Get_version(pResult, pParams);
			break;
			
		case 3 :
			cURL_Unescape_url(pResult, pParams);
			break;
			
		case 4 :
			cURL_Escape_url(pResult, pParams);
			break;
			
		case 5 :
			_cURL(pResult, pParams);
			break;
			
			// --- Common Crypto
			
		case 6 :
			SHA256(pResult, pParams);
			break;
			
		case 7 :
			SHA1(pResult, pParams);
			break;
			
		case 8 :
			MD5(pResult, pParams);
			break;
			
		case 9 :
			SHA512(pResult, pParams);
			break;
			
		case 10 :
			SHA384(pResult, pParams);
			break;
			
		case 11 :
			HMACSHA512(pResult, pParams);
			break;
			
		case 12 :
			HMACSHA384(pResult, pParams);
			break;
			
		case 13 :
			HMACSHA256(pResult, pParams);
			break;
			
		case 14 :
			HMACSHA1(pResult, pParams);
			break;
			
		case 15 :
			HMACMD5(pResult, pParams);
			break;
			
			// --- ZIP
			
		case 16 :
			Zip(pResult, pParams);
			break;
			
		case 17 :
			Unzip(pResult, pParams);
			break;
			
			// --- JSON
			
		case 18 :
			JSON_CLEAR(pResult, pParams);
			break;
			
		case 19 :
			JSON_SET_BOOL(pResult, pParams);
			break;
			
		case 20 :
			JSON_Append_node(pResult, pParams);
			break;
			
		case 21 :
			JSON_Append_bool(pResult, pParams);
			break;
			
		case 22 :
			JSON_Append_real(pResult, pParams);
			break;
			
		case 23 :
			JSON_Append_long(pResult, pParams);
			break;
			
		case 24 :
			JSON_Append_text(pResult, pParams);
			break;
			
		case 25 :
			JSON_Append_text_array(pResult, pParams);
			break;
			
		case 26 :
			JSON_Append_long_array(pResult, pParams);
			break;
			
		case 27 :
			JSON_Append_real_array(pResult, pParams);
			break;
			
		case 28 :
			JSON_Append_bool_array(pResult, pParams);
			break;
			
		case 29 :
			JSON_SET_REAL(pResult, pParams);
			break;
			
		case 30 :
			JSON_SET_LONG(pResult, pParams);
			break;
			
		case 31 :
			JSON_SET_TEXT(pResult, pParams);
			break;
			
		case 32 :
			JSON_SET_NAME(pResult, pParams);
			break;
			
		case 33 :
			JSON_SET_COMMENT(pResult, pParams);
			break;
			
		case 34 :
			JSON_SET_NULL(pResult, pParams);
			break;
			
		case 35 :
			JSON_SET_TYPE(pResult, pParams);
			break;
			
		case 36 :
			JSON_DELETE_ITEM_BY_POSITION(pResult, pParams);
			break;
			
		case 37 :
			JSON_DELETE_ITEM_BY_NAME(pResult, pParams);
			break;
			
		case 38 :
			JSON_Get_text(pResult, pParams);
			break;
			
		case 39 :
			JSON_Get_name(pResult, pParams);
			break;
			
		case 40 :
			JSON_Get_type(pResult, pParams);
			break;
			
		case 41 :
			JSON_Get_long(pResult, pParams);
			break;
			
		case 42 :
			JSON_Get_real(pResult, pParams);
			break;
			
		case 43 :
			JSON_Get_bool(pResult, pParams);
			break;
			
		case 44 :
			JSON_GET_REAL_ARRAY(pResult, pParams);
			break;
			
		case 45 :
			JSON_GET_TEXT_ARRAY(pResult, pParams);
			break;
			
		case 46 :
			JSON_Get_comment(pResult, pParams);
			break;
			
		case 47 :
			JSON_Get_child_by_position(pResult, pParams);
			break;
			
		case 48 :
			JSON_Get_child_by_name(pResult, pParams);
			break;
			
		case 49 :
			JSON_GET_LONG_ARRAY(pResult, pParams);
			break;
			
		case 50 :
			JSON_GET_CHILD_NODES(pResult, pParams);
			break;
			
		case 51 :
			JSON_GET_BOOL_ARRAY(pResult, pParams);
			break;
			
		case 52 :
			JSON_New(pResult, pParams);
			break;
			
		case 53 :
			JSON_CLOSE(pResult, pParams);
			break;
			
		case 54 :
			JSON_Export_to_text(pResult, pParams);
			break;
			
		case 55 :
			JSON_Parse_text(pResult, pParams);
			break;
			
		case 56 :
			JSON_Strip_white_space(pResult, pParams);
			break;
			
			// --- MISC
			
		case 57 :
			PICTURE_GET_RAW_DATA(pResult, pParams);
			break;
			
		case 58 :
			STACK_Get_available_size(pResult, pParams);
			break;
			
		case 59 :
			PROCESS_GET_LIST(pResult, pParams);
			break;
			
		case 60 :
			PROCESS_Get_id(pResult, pParams);
			break;
			
		case 61 :
			SYSTEM_Get_timestamp(pResult, pParams);
			break;
			
		case 62 :
			SYSTEM_Get_timestring(pResult, pParams);
			break;
			
		case 63 :
			SYSTEM_Generate_UUID(pResult, pParams);
			break;
			
		case 64 :
			SYSTEM_Get_unixtime(pResult, pParams);
			break;
			
		case 65 :
			STRUCTURE_Import_definition(pResult, pParams);
			break;
			
		case 66 :
			VOLUME_Is_remote(pResult, pParams);
			break;
			
		case 67 :
			PATH_Get_known_folder(pResult, pParams);
			break;
			
		case 68 :
			PATH_From_user_selection(pResult, pParams);
			break;
			
		case 69 :
			VOLUME_Is_ejectable(pResult, pParams);
			break;
			
	}
}