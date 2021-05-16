#pragma once

inline double Convert_ed(int c1, int c2, int c3, double a)
{
if (c1 == 0)
switch (c2)
{
case 0:
	switch (c3)
	{
	case 0:
		return a;
		break;
	case 1:
		a = a * 1000;
		return a;
		break;
	case 2:
		a = a * 100000;
		return a;
		break;
	case 3:
		a = a * 1000000;
		return a;
		break;
	}
	break;
case 1:
	switch (c3)
	{
	case 0:
		a = a / 1000;
		return a;
		break;
	case 1:
		return a;
		break;
	case 2:
		a = a * 100;
		return a;
		break;
	case 3:
		a = a * 1000;
		return a;
		break;
	}
	break;
case 2:
	switch (c3)
	{
	case 0:
		a = a / 100000;
		return a;
		break;
	case 1:
		a = a / 100;
		return a;		
		break;
	case 2:
		return a;		
		break;
	case 3:
		a = a * 10;
		return a;		
		break;
	}
	break;
case 3:
	switch (c3)
	{
	case 0:
		a = a / 1000000;
		return a;
		break;
	case 1:
		a = a / 1000;
		return a;
		break;
	case 2:
		a = a / 10;
		return a;
		break;
	case 3:
		return a;
		break;
	}
	break;

}

if (c1 == 1)
switch (c2)
{
case 0:
	switch (c3)
	{
	case 0:
		return a;
		break;
	case 1:
		a = a * 1000;
		return a;
		break;
	case 2:
		a = a * 1000000;
		return a;
		break;
	case 3:
		a = a * 1000000000;
		return a;
		break;
	}
	break;
case 1:
	switch (c3)
	{
	case 0:
		a = a / 1000;
		return a;
		break;
	case 1:
		return a;
		break;
	case 2:
		a = a * 1000;
		return a;
		break;
	case 3:
		a = a * 1000000;
		return a;
		break;
	}
	break;
case 2:
	switch (c3)
	{
	case 0:
		a = a / 1000000;
		return a;
		break;
	case 1:
		a = a / 1000;
		return a;
		break;
	case 2:
		return a;
		break;
	case 3:
		a = a * 1000;
		return a;
		break;
	}
	break;
case 3:
	switch (c3)
	{
	case 0:
		a = a / 1000000000;
		return a;
		break;
	case 1:
		a = a / 1000000;
		return a;
		break;
	case 2:
		a = a / 1000;
		return a;
		break;
	case 3:
		return a;
		break;
	}
	break;
}
if (c1 == 2)
	switch (c2)
	{
		case 0:
			switch (c3)
			{
			case 0:
				return a;
				break;
			case 1:
				a = a * 0.014;
				return a;
				break;
			case 2:
				a = a * 0.011;
				return a;
				break;
			case 3:
				a = a * 0.37;
				return a;
				break;
			}
			break;
		case 1:
			switch (c3)
			{
			case 0:
				a = a * 74;
				return a;
				break;
			case 1:
				return a;
				break;
			case 2:
				a = a * 0.82;
				return a;
				break;
			case 3:
				a = a * 27.63;
				return a;
				break;
			}
			break;
		case 2:
			switch (c3)
			{
			case 0:
				a = a * 89.62;
				return a;
				break;
			case 1:
				a = a * 1.21;
				return a;
				break;
			case 2:
				return a;
				break;
			case 3:
				a = a * 33.37;
				return a;
				break;
			}
			break;
		case 3:
			switch (c3)
			{
			case 0:
				a = a * 2.68;
				return a;
				break;
			case 1:
				a = a * 0.036;
				return a;
				break;
			case 2:
				a = a * 0.03;
				return a;
				break;
			case 3:
				return a;
				break;
			}
			break;
	}
}

