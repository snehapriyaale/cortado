#import <ReactiveViewModel/ReactiveViewModel.h>

@class Drink;
@class DrinkCellViewModel;
@class PreferredDrinks;

@interface PreferredDrinksViewModel : RVMViewModel

@property (readonly, nonatomic, strong) PreferredDrinks *drinks;
@property (readonly) NSUInteger numberOfDrinks;

- (Drink *)drinkAtIndex:(NSUInteger)index;
- (DrinkCellViewModel *)drinkViewModelAtIndex:(NSUInteger)index;

- (void)setDrink:(Drink *)drink forIndex:(NSUInteger)index;

@end
