signed int __fastcall sub_810E384(int a1)
{
  unsigned int *v1; // r4@1
  int v2; // r2@1
  int v3; // r2@1
  signed int result; // r0@2
  int v5; // r2@3
  int v6; // r2@5
  int v7; // r2@7
  int v8; // r2@9

  v1 = &dword_3004360[25 * (unsigned __int8)sub_810F87C(a1)];
  if ( GetMonData((int)v1, 32, v2) == 255 )
  {
    result = 6;
  }
  else if ( (unsigned int)GetMonData((int)v1, 32, v3) <= 0xC7 )
  {
    if ( (unsigned int)GetMonData((int)v1, 32, v5) <= 0x95 )
    {
      if ( (unsigned int)GetMonData((int)v1, 32, v6) <= 0x63 )
      {
        if ( (unsigned int)GetMonData((int)v1, 32, v7) <= 0x31 )
          result = GetMonData((int)v1, 32, v8) != 0;
        else
          result = 2;
      }
      else
      {
        result = 3;
      }
    }
    else
    {
      result = 4;
    }
  }
  else
  {
    result = 5;
  }
  return result;
}
