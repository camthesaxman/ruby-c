int sub_808B3A0()
{
  int v1; // [sp+4h] [bp-4h]@0

  while ( (unsigned __int8)sub_806B124() != 1 )
  {
    if ( (sub_80F9344() & 0xFF) == 1 )
      return v1;
  }
  sub_806C994(v201B260, byte_3005CE0);
  sub_806BF74(v201B260, 0);
  SetMainCallback2((int)sub_806AEDC);
  return v1;
}
