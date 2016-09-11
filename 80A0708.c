int __fastcall sub_80A0708(int a1, char a2, int a3)
{
  int v3; // r4@1
  char v4; // r5@1
  char v5; // r9@1
  unsigned int v6; // r2@1
  unsigned int v7; // r6@1
  unsigned int v8; // r8@1
  int v9; // r2@1
  void *v10; // r0@2
  int v11; // r7@3
  int v13; // [sp+18h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a2;
  v6 = a3 << 24;
  v7 = v6 >> 24;
  v8 = v6 >> 24;
  if ( (unsigned int)((GetMonData(a1, 37, v6) << 24) - 0x1000000) >> 24 <= 2 )
  {
    v11 = (unsigned __int8)GetMonData(v3, 35, v9);
    if ( v11 == 255 )
    {
      v10 = &gUnknown_0842D164;
    }
    else if ( sub_80A0664(v3) << 24 )
    {
      if ( v11 != 253 )
      {
        MenuPrint((int)&gUnknown_0842D133, v5, v8);
        return v13;
      }
      v10 = &gUnknown_0842D1C3;
    }
    else
    {
      v10 = &gUnknown_0842D197;
    }
  }
  else
  {
    v10 = &gUnknown_0842D197;
  }
  MenuPrint((int)v10, v4, v7);
  return v13;
}
