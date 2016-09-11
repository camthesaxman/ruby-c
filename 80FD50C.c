signed int __fastcall sub_80FD50C(_WORD *a1, _WORD *a2)
{
  signed int result; // r0@3

  if ( !*a1 )
    goto LABEL_9;
  if ( *a1 & 0x8000 )
    return 0x8000;
  if ( *a2 & 0x8000 )
LABEL_9:
    result = 0;
  else
    result = *a1;
  return result;
}
