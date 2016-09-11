int sub_8139C18()
{
  int v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  sub_80A9684(33709004, 0x32u);
  if ( gUnknown_084062F0[0] )
  {
    do
    {
      if ( (unsigned __int8)sub_80A9760(gUnknown_084062F0[2 * v0], word_84062F2[2 * v0]) != 1 )
        break;
      v0 = (v0 + 1) & 0xFF;
      if ( !gUnknown_084062F0[2 * v0] )
        break;
    }
    while ( word_84062F2[2 * v0] );
  }
  return v2;
}
