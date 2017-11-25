import Data.Char

solve :: String -> Int -> String
solve [] _ = []
solve (x:xs) cnt = do
	let k = digitToInt x
	let p = 9 - k
	if p == 0 && cnt == 0 then x : solve xs (cnt + 1)
	else if k >= 5 then intToDigit p : solve xs (cnt + 1)
	else x : solve xs (cnt + 1)

main :: IO()
main = do
	k <- getLine
	putStrLn (solve k 0)
