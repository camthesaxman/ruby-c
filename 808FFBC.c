int __fastcall sub_808FFBC(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r0@2
  int *v3; // r1@5
  int (__fastcall *v4)(unsigned __int8); // r0@5
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    sub_811A4F8();
    v2 = *(_BYTE *)(v202FFB4 + 1615);
    if ( v2 == 2 )
    {
      v3 = &dword_3004B20[10 * v1];
      v4 = sub_808F8D8;
    }
    else if ( v2 > 2 && v2 == 3 )
    {
      v3 = &dword_3004B20[10 * v1];
      v4 = (int (__fastcall *)(unsigned __int8))sub_8090070;
    }
    else
    {
      v3 = &dword_3004B20[10 * v1];
      v4 = sub_808F2B0;
    }
    *v3 = (int)v4;
  }
  return v6;
}
