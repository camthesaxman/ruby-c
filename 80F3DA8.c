int move_anim_execute()
{
  unsigned int v0; // r5@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( !*(_DWORD *)(4 * v0 + 0x2008800) )
      break;
    DestroySprite(*(_DWORD *)(4 * v0 + 0x2008800));
    *(_DWORD *)(4 * v0 + 0x2008800) = 0;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 9 );
  return v2;
}
