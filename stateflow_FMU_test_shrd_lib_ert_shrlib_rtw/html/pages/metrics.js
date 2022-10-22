function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["stateflow_FMU_test_shrd_lib.c:stateflow_FMU_test_shrd_lib_M_"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib.c",
	size: 96};
	 this.metricsArray.var["stateflow_FMU_test_shrd_lib_DW"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib.c",
	size: 2};
	 this.metricsArray.var["stateflow_FMU_test_shrd_lib_U"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib.c",
	size: 48};
	 this.metricsArray.var["stateflow_FMU_test_shrd_lib_Y"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib.c",
	size: 48};
	 this.metricsArray.var["stateflow_FMU_test_shrd_lib_capi.c:mmiStatic"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib_capi.c",
	size: 184};
	 this.metricsArray.var["stateflow_FMU_test_shrd_lib_capi.c:rtDataAddrMap"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib_capi.c",
	size: 96};
	 this.metricsArray.var["stateflow_FMU_test_shrd_lib_capi.c:rtVarDimsAddrMap"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib_capi.c",
	size: 8};
	 this.metricsArray.fcn["byteswap.h:__bswap_32"] = {file: "D:\\Program Files\\Matlab\\polyspace\\verifier\\cxx\\include\\include-libc\\bits\\byteswap.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["byteswap.h:__bswap_64"] = {file: "D:\\Program Files\\Matlab\\polyspace\\verifier\\cxx\\include\\include-libc\\bits\\byteswap.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["stateflow_FMU_test_shrd_lib_GetCAPIStaticMap"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib_capi.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["stateflow_FMU_test_shrd_lib_InitializeDataMapInfo"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib_capi.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["stateflow_FMU_test_shrd_lib_initialize"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["stateflow_FMU_test_shrd_lib_step"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["stateflow_FMU_test_shrd_lib_terminate"] = {file: "F:\\GitHubRepos\\stateflow_FMU_test\\stateflow_FMU_test_shrd_lib_ert_shrlib_rtw\\stateflow_FMU_test_shrd_lib.c",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'stateflow_FMU_test_shrd_lib_metrics\'});">Global Memory: 482(bytes) Maximum Stack: 0(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
