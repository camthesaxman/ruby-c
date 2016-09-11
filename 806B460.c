int sub_806B460()
{
  int v1; // [sp+0h] [bp-4h]@0

  while ( (unsigned __int8)sub_806B124() != 1 )
  {
    if ( (sub_80F9344() & 0xFF) == 1 )
      return v1;
  }
  if ( v201B258 != 5 )
    sub_806BF74(v201B260, 0);
  SetMainCallback2((int)sub_806AEDC);
  return v1;
}
