signed int __fastcall sub_806E904(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  unsigned int v5; // r1@1
  unsigned int v6; // r4@1
  char v8; // r0@4
  __int16 v9; // [sp+0h] [bp-10h]@6

  v4 = a1;
  v5 = a2 << 16;
  v6 = v5 >> 16;
  if ( (unsigned __int8)itemid_is_mail(v5 >> 16, v5, a3, a4) == 1 )
  {
    if ( (sub_80A2BC4(v4, v6) & 0xFF) == 255 )
      return 1;
    v8 = 2;
  }
  else
  {
    v8 = 1;
  }
  v202E8F4 = v8;
  v9 = v6;
  SetMonData(v4, 12, (int)&v9);
  return 0;
}
