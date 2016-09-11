int dive_3_unknown()
{
  unsigned __int8 v0; // r0@2
  int v2; // [sp+0h] [bp-Ch]@1

  PlayerGetDestCoords(&v2, (_WORD *)&v2 + 1);
  if ( !(FieldEffectActiveListContains(6u) << 24) )
  {
    dive_warp((int)&v2, BYTE2(dword_30048A0[9 * v202E85D + 7]));
    v0 = FindTaskIdByFunc((int)sub_80870EC);
    DestroyTask(v0);
    FieldEffectActiveListRemove(0x2Cu);
  }
  return 0;
}
