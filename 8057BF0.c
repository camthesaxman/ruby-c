int __fastcall RedrawMapSlicesForCameraUpdate(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r4@1
  int v8; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = v202E828;
  if ( a2 > 0 )
    sub_8057D48(a1, v202E828);
  if ( v4 < 0 )
    RedrawMapSliceEast(v3, v6);
  if ( v5 > 0 )
    sub_8057C3C(v3, v6);
  if ( v5 < 0 )
    RedrawMapSliceSouth(v3, v6);
  *(_BYTE *)(v3 + 4) = 1;
  return v8;
}
