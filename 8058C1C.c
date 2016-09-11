int ForcedMovement_MuddySlope()
{
  int *v0; // r4@1
  int result; // r0@3

  v0 = &dword_30048A0[9 * v202E85D];
  if ( (*((_BYTE *)v0 + 24) & 0xF0) == 32 && (signed __int16)sub_80E6034() > 3 )
  {
    result = 0;
  }
  else
  {
    sub_80E6010(0);
    *((_BYTE *)v0 + 1) |= 2u;
    result = (unsigned __int8)DoForcedMovement(1u);
  }
  return result;
}
