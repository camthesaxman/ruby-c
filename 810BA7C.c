int __fastcall sub_810BA7C(char a1)
{
  char v1; // r0@3
  int v3; // [sp+0h] [bp-4h]@0

  v2039244 = a1;
  if ( a1 == 2 )
  {
    dword_3000758 = (int)&gUnknown_083F7F1F;
    v203924C = 2;
  }
  else
  {
    if ( a1 == 3 )
    {
      dword_3000758 = (int)&gUnknown_083F7F21;
      v1 = 2;
    }
    else
    {
      dword_3000758 = (int)&gUnknown_083F7F1C;
      v1 = 3;
    }
    v203924C = v1;
  }
  return v3;
}
