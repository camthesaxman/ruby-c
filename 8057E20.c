int __fastcall DrawMetatileAt(int a1, unsigned __int16 a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r8@1
  unsigned int v8; // r4@1
  int v9; // r5@4
  unsigned __int8 v10; // r0@6
  int v12; // [sp+14h] [bp-4h]@0

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = a2;
  v8 = (unsigned __int16)MapGridGetMetatileIdAt(a3, a4);
  if ( v8 > 0x400 )
    v8 = 0;
  if ( v8 > 0x1FF )
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v4 + 20) + 12);
    v8 = (v8 - 512) & 0xFFFF;
  }
  else
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v4 + 16) + 12);
  }
  v10 = MapGridGetMetatileLayerTypeAt(v5, v6);
  DrawMetatile(v10, v9 + 16 * v8, v7);
  return v12;
}
