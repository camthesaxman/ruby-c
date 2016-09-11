int DoForcedMovementInCurrentDirection()
{
  int *v0; // r0@1

  v0 = &dword_30048A0[9 * v202E85D];
  *((_BYTE *)v0 + 1) |= 4u;
  return (unsigned __int8)DoForcedMovement(*((_BYTE *)v0 + 24) >> 4);
}
