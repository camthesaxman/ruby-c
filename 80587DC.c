int __fastcall player_step(unsigned __int8 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // r8@1
  int v4; // r7@1
  int v5; // r6@1
  int *v6; // r5@1
  int v7; // r0@3
  int v8; // r0@3
  int v9; // r0@4
  int v11; // [sp+14h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = &dword_30048A0[9 * v202E85D];
  sub_8059D60(v6);
  if ( !v202E85E )
  {
    sub_80E5B38(v4, v5);
    if ( !(sub_8058854(v6, v3) << 24) )
    {
      v7 = npc_clear_strange_bits(v6);
      v8 = DoPlayerAvatarTransition(v7);
      if ( !(TryDoMetatileBehaviorForcedMovment(v8) << 24) )
      {
        v9 = MovePlayerAvatarUsingKeypadInput(v3, v4, v5);
        PlayerAllowForcedMovementIfMovingSameDirection(v9);
      }
    }
  }
  return v11;
}
