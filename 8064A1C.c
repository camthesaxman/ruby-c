int __fastcall DoShadowFieldEffect(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( !(*(_BYTE *)(a1 + 2) & 0x40) )
  {
    *(_BYTE *)(a1 + 2) |= 0x40u;
    oe_exec_and_other_stuff(3u, a1);
  }
  return v2;
}
