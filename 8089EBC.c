int sub_8089EBC()
{
  int v1; // [sp+8h] [bp-4h]@0

  while ( (unsigned __int8)sub_806B124() != 1 )
  {
    if ( (sub_80F9344() & 0xFF) == 1 )
      return v1;
  }
  sub_806C994(v201B260, v20384F0);
  sub_806BF74(v201B260, 0);
  byte_3005CE0 = v20384F0;
  sub_8089E84();
  SetMainCallback2((int)sub_806AEDC);
  return v1;
}
