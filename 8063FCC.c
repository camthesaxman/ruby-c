int __fastcall sub_8063FCC(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = GetFieldObjectGraphicsInfo(*(_BYTE *)(a1 + 5));
  call_via_r3(v2, v3, 1, *(&gUnknown_08376080 + *(_BYTE *)(v4 + 13)));
  return v6;
}
