int __fastcall sub_8064CDC(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( walkrun_is_standing_still() << 24 )
  {
    sub_80594C0();
    DestroyTask(v1);
  }
  return v3;
}
