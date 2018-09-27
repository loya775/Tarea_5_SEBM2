function [mean_d,variance_d,min_d,max_d,is_max_outlier, is_min_outlier] = get_stats(data)

	mean_d = mean(data);
	variance_d = var(data);
	min_d = min(data);
	max_d = max(data);
	if(min_d < mean_d - 3*sqrt(variance_d))
		is_min_outlier = 1;
	else
		is_min_outlier = 0;
	end
	if(max_d > mean_d + 3*sqrt(variance_d))
		is_max_outlier = 1;
	else
		is_max_outlier = 0;
	end
end
