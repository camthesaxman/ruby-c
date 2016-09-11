int __fastcall door_frame_last(_BYTE *a1)
{
  _BYTE *i; // r1@1

  for ( i = a1; *i; i += 4 )
    ;
  return (int)(i - 4);
}
