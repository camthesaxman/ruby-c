int atkB4_jumpifconfusedandattackmaxed()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 7
    && *(_BYTE *)(*(_BYTE *)(v2024C10 + 1) + 88 * v2024C08 + 0x2024A98) == 12 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 2) | (*(_BYTE *)(v2024C10 + 3) << 8) | (*(_BYTE *)(v2024C10 + 4) << 16) | (*(_BYTE *)(v2024C10 + 5) << 24);
  }
  else
  {
    v2024C10 += 6;
  }
  return v1;
}
