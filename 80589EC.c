signed int __fastcall DoForcedMovement(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1

  v1 = a1;
  v2 = CheckForPlayerAvatarCollision(a1) & 0xFF;
  v202E858 |= 0x40u;
  if ( v2 )
  {
    ForcedMovement_None();
    if ( v2 <= 4 )
      return 0;
    if ( v2 == 6 )
      PlayerJumpLedge(v1);
    v202E858 |= 0x40u;
    v202E85A = 2;
  }
  else
  {
    v202E85A = 2;
    call_via_r9(v1);
  }
  return 1;
}
