signed int __fastcall sub_80AE47C(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r2@1
  signed int result; // r0@2
  int v6; // r2@3
  int v7; // r0@7
  int v8; // r1@7
  unsigned int v9; // r0@12
  unsigned int v10; // r2@14

  v3 = a1;
  if ( GetMonData(a1, 45, a3) )
  {
    result = 3;
  }
  else if ( GetMonData(v3, 57, v4) )
  {
    if ( v203869C > 4u )
    {
def_80AE4AE:
      result = 0;
    }
    else
    {
      switch ( v203869C )
      {
        case 0u:
          v7 = v3;
          v8 = 50;
          break;
        case 1u:
          v7 = v3;
          v8 = 51;
          break;
        case 2u:
          v7 = v3;
          v8 = 52;
          break;
        case 3u:
          v7 = v3;
          v8 = 53;
          break;
        case 4u:
          v7 = v3;
          v8 = 54;
          break;
        default:
          goto def_80AE4AE;
      }
      v9 = GetMonData(v7, v8, v6) << 24;
      v10 = v9 >> 24;
      result = 2;
      if ( v10 <= v203869E )
      {
        result = 0;
        if ( v10 >= v203869E )
          result = 1;
      }
    }
  }
  else
  {
    result = 4;
  }
  return result;
}
