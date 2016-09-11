int __fastcall GetFieldObjectMovingCameraOffset(_WORD *a1, _WORD *a2)
{
  int v2; // r2@5
  int v4; // [sp+0h] [bp-4h]@0

  *a1 = 0;
  *a2 = 0;
  if ( dword_3004890 > 0 )
    *a1 = 1;
  if ( dword_3004890 < 0 )
    --*a1;
  v2 = dword_3004894;
  if ( dword_3004894 > 0 )
    ++*a2;
  if ( v2 < 0 )
    --*a2;
  return v4;
}
