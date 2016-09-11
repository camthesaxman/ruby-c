signed int __fastcall waterfall_2_wait_anim_finish_probably(int a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( FieldEffectActiveListContains(6u) << 24 )
  {
    result = 0;
  }
  else
  {
    ++*(_WORD *)(v1 + 8);
    result = 1;
  }
  return result;
}
