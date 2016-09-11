int __fastcall DrawDoorMetatileAt(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r0@1
  int v6; // [sp+Ch] [bp-4h]@0

  v3 = a3;
  v4 = MapPosToBgTilemapOffset(&byte_3000590, a1, a2);
  if ( v4 >= 0 )
  {
    DrawMetatile(1, v3, (unsigned __int16)v4);
    byte_3000594 = 1;
  }
  return v6;
}
