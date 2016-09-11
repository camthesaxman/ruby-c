int sub_804BA64()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( *((_WORD *)&gLinkPlayers + 14 * (((GetMultiplayerId() << 24) ^ 0x1000000u) >> 24) + 1) == 0x8000 )
    sub_80690F0();
  return v1;
}
