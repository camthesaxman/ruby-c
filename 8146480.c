int __fastcall sub_8146480(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r7@1
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( (word_30017A0 & 0xF0) == 64 )
      sub_81466E8(a1, -1);
    if ( (word_30017A0 & 0xF0) == 128 )
      sub_81466E8(v1, 1);
    if ( word_300179E & 1 || word_300179E & 2 )
      sub_8146440(v2);
  }
  return v4;
}
