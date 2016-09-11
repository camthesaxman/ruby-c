int __fastcall sub_80A0A2C(int a1, unsigned __int8 a2, int a3)
{
  int v3; // r5@1
  unsigned int v4; // r2@1
  unsigned int v5; // r4@1
  int v6; // r0@1
  int v7; // r0@3
  void *v8; // r0@6
  signed int v9; // r1@6
  int v11; // [sp+Ch] [bp-4h]@0

  v3 = a2;
  v4 = a3 << 24;
  v5 = v4 >> 24;
  v6 = (unsigned __int16)GetMonData(a1, 65, v4);
  if ( v6 != 32 && v6 != 29 )
  {
    v7 = (unsigned __int8)GetMonGender();
    if ( v7 )
    {
      if ( v7 != 254 )
      {
        MenuZeroFillWindowRect(v3, v5, v3, v5 + 1);
        return v11;
      }
      v8 = &gUnknown_0840E68B;
      v9 = 12;
    }
    else
    {
      v8 = &gUnknown_0840E689;
      v9 = 11;
    }
    sub_80A1FF8(v8, v9, v3, v5);
  }
  return v11;
}
