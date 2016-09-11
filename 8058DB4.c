int __fastcall CheckForPlayerAvatarCollision(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r4@1
  int v3; // ST00_4@1
  __int16 v5; // [sp+4h] [bp-14h]@1
  __int16 v6; // [sp+6h] [bp-12h]@1

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  v5 = *((_WORD *)v2 + 8);
  v6 = *((_WORD *)v2 + 9);
  MoveCoords(a1, &v5, &v6);
  v3 = (unsigned __int8)MapGridGetMetatileBehaviorAt(v5, v6);
  return (unsigned __int8)CheckForFieldObjectCollision(v2, v5, v6, v1);
}
