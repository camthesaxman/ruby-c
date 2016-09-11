int __fastcall sub_80583CC(int a1, int a2, _BYTE *a3)
{
  int v3; // r5@1
  int v4; // r6@1
  _BYTE *v5; // r4@1
  int v7; // [sp+0h] [bp-20h]@1
  int v8; // [sp+1Ch] [bp-4h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  door_build_blockdef(&v7, 1016, a3);
  DrawDoorMetatileAt(v3, v4 - 1, (int)&v7);
  door_build_blockdef(&v7, 1020, v5 + 4);
  DrawDoorMetatileAt(v3, v4, (int)&v7);
  return v8;
}
