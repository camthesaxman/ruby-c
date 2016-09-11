signed int sub_8136D00()
{
  _BYTE *v0; // r1@1

  do
  {
    ++*(_BYTE *)(v2039304 + 83);
    v0 = (_BYTE *)(v2039304 + 83);
    if ( (unsigned int)*(_BYTE *)(v2039304 + 83) > 4 )
    {
      *v0 = 5;
      return 0;
    }
  }
  while ( !*(_BYTE *)(v2039304 + 97 + *v0) );
  sub_8136DC0(v2039304 + 16, *(_BYTE *)(v2039304 + 83), *(_BYTE *)(v2039304 + 97 + *(_BYTE *)(v2039304 + 83)));
  sub_8136DA0(v2039304 + 16);
  return 1;
}
