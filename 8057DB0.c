int __fastcall CurrentMapDrawMetatileAt(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = MapPosToBgTilemapOffset(&byte_3000590, a1, a2);
  if ( v4 >= 0 )
  {
    DrawMetatileAt(v202E828, (unsigned __int16)v4, v2, v3);
    byte_3000594 = 1;
  }
  return v6;
}
