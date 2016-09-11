int ForcedMovement_None()
{
  int *v0; // r0@2
  int v1; // r1@2

  if ( v202E858 & 0x40 )
  {
    v0 = &dword_30048A0[9 * v202E85D];
    *((_BYTE *)v0 + 1) = *((_BYTE *)v0 + 1) & 0xFD | 8;
    v1 = *((_BYTE *)v0 + 24) & 0xF;
    FieldObjectSetDirection();
    v202E858 &= 0xBFu;
  }
  return 0;
}
