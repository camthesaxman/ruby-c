int __fastcall sub_80BB3B4(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r0@6
  signed int v3; // r0@6
  int v4; // r0@10
  unsigned int v5; // r0@10
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8119F88(3);
  if ( word_300179E & 1 )
    sub_811A050((unsigned __int16)word_3005D34);
  if ( word_300179E & 0x100 )
    sub_8075398();
  if ( word_30017A0 & 0x40 )
  {
    v2 = (unsigned __int16)word_3005D34-- - 1;
    v3 = v2 << 16;
    if ( !v3 )
    {
      v3 = 384;
      word_3005D34 = 384;
    }
    sub_80BB494(v3);
  }
  if ( word_30017A0 & 0x80 )
  {
    v4 = (unsigned __int16)word_3005D34++ + 1;
    v5 = v4 << 16;
    if ( v5 > 0x1800000 )
    {
      v5 = 1;
      word_3005D34 = 1;
    }
    sub_80BB494(v5);
  }
  if ( word_300179E & 2 )
  {
    v4000000 = 28992;
    v4000040 = 4575;
    v4000044 = 287;
    MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
    dword_3004B20[10 * v1] = (int)sub_80BA258;
    sub_811A4F8();
  }
  return v7;
}
