int sub_808AF80()
{
  int v0; // r2@1
  int v1; // r0@3
  int v2; // r1@3
  int v4; // [sp+8h] [bp-4h]@0

  while ( (unsigned __int8)sub_806B124() != 1 )
  {
    if ( (sub_80F9344() & 0xFF) == 1 )
      return v4;
  }
  if ( !v2038561 )
  {
    v1 = (unsigned __int8)CheckIfItemIsTMHMOrEvolutionStone(v203855E);
    if ( v1 == 1 )
    {
      sub_808AE8C(1, v2, v0);
    }
    else if ( v1 == 2 )
    {
      sub_808AF20(2, v2, v0);
    }
  }
  if ( (unsigned __int8)byte_3005CE0 > 5u
    || !GetMonData((int)&dword_3004360[25 * (unsigned __int8)byte_3005CE0], 11, v0) )
  {
    byte_3005CE0 = 0;
  }
  sub_806C994(v201B260, byte_3005CE0);
  sub_806BF74(v201B260, 0);
  SetMainCallback2((int)sub_806AEDC);
  return v4;
}
