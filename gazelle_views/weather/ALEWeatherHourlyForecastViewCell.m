#import "ALEWeatherHourlyForecastViewCell.h"

@implementation ALEWeatherHourlyForecastViewCell

- (id)initWithForecast:(HourlyForecast *)forecast celsius:(BOOL)celsius {

	if(self = [super init]) {
		_forecast = forecast;
		_celsius = celsius;
	}
	return self;
}

- (void)layoutSubviews {

	[super layoutSubviews];
	if (!_conditionIconView) {

	/* Start Time Label Setup */

	_timeLabel = [[UILabel alloc] init];
	_timeLabel.font = [UIFont fontWithName:@".SFUIText-Light" size:11];
	_timeLabel.text = [ALEWeatherUtility localizedShortTime:_forecast.time];
	_timeLabel.textColor = [UIColor whiteColor];
	_timeLabel.translatesAutoresizingMaskIntoConstraints = NO;
	[self addSubview:_timeLabel];

	[self addConstraint:[NSLayoutConstraint constraintWithItem:_timeLabel attribute:NSLayoutAttributeCenterX relatedBy:NSLayoutRelationEqual toItem:self attribute:NSLayoutAttributeCenterX multiplier:1 constant:0]];
	[self addConstraint:[NSLayoutConstraint constraintWithItem:_timeLabel attribute:NSLayoutAttributeTop relatedBy:NSLayoutRelationEqual toItem:self attribute:NSLayoutAttributeTop multiplier:1 constant:0]]; 

	/* End Time Label Setup */

	/* Start Condition Icon View Setup */

	_conditionIconView = [[UIImageView alloc] init];
	_conditionIconView.image = [ALEWeatherUtility imageForConditionCode:_forecast.conditionCode];
	_conditionIconView.translatesAutoresizingMaskIntoConstraints = NO;
	[self addSubview:_conditionIconView];

	[self addConstraint:[NSLayoutConstraint constraintWithItem:_conditionIconView attribute:NSLayoutAttributeCenterX relatedBy:NSLayoutRelationEqual toItem:self attribute:NSLayoutAttributeCenterX multiplier:1 constant:0]];
	[self addConstraint:[NSLayoutConstraint constraintWithItem:_conditionIconView attribute:NSLayoutAttributeCenterY relatedBy:NSLayoutRelationEqual toItem:self attribute:NSLayoutAttributeCenterY multiplier:1 constant:0]];

	/* End Condition Icon View Setup */

	/* Start Temperature Label Setup */

	_temperatureLabel = [[UILabel alloc] init];
	NSString *temperatureLabelString = _celsius ? [NSString stringWithFormat:@"%@O",_forecast.detail] : [ALEWeatherUtility celsiusToFahrenheit:_forecast.detail withDegree:YES];
	NSMutableAttributedString *attributedString = [[NSMutableAttributedString alloc] initWithString:temperatureLabelString
                                                                                         attributes:@{NSFontAttributeName: [UIFont fontWithName:@".SFUIDisplay-Light" size:14]}];
    [attributedString setAttributes:@{NSFontAttributeName : [UIFont fontWithName:@".SFUIDisplay-Light" size:7],NSBaselineOffsetAttributeName : @4} range:NSMakeRange([temperatureLabelString length]-1, 1)];
    _temperatureLabel.attributedText = attributedString;
	_temperatureLabel.textColor = [UIColor whiteColor];
	_temperatureLabel.translatesAutoresizingMaskIntoConstraints = NO;
	[self addSubview:_temperatureLabel];

	[self addConstraint:[NSLayoutConstraint constraintWithItem:_temperatureLabel attribute:NSLayoutAttributeCenterX relatedBy:NSLayoutRelationEqual toItem:self attribute:NSLayoutAttributeCenterX multiplier:1 constant:0]];
	[self addConstraint:[NSLayoutConstraint constraintWithItem:_temperatureLabel attribute:NSLayoutAttributeBottom relatedBy:NSLayoutRelationEqual toItem:self attribute:NSLayoutAttributeBottom multiplier:1 constant:0]];

	/* End Temperature Label Setup */
}
}

@end