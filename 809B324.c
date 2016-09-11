signed int sub_809B324()
{
  signed int result; // r0@3

  if ( *(_WORD *)(v20011C0 + 38) && *(_WORD *)(v20011C0 + 38) == 8 )
  {
    result = 0;
  }
  else
  {
    ++*(_WORD *)(v20011C0 + 38);
    result = 1;
  }
  return result;
}
