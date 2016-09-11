int __fastcall GetXYCoordsOneStepInFrontOfPlayer(_WORD *a1, _WORD *a2)
{
  _WORD *v2; // r4@1
  _WORD *v3; // r5@1
  unsigned __int8 v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  *a1 = dword_30048A0[9 * v202E85D + 4];
  *a2 = HIWORD(dword_30048A0[9 * v202E85D + 4]);
  v4 = player_get_direction_lower_nybble();
  MoveCoords(v4, v2, v3);
  return v6;
}
