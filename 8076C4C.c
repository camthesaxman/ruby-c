int sub_8076C4C()
{
  int v0; // r1@1
  __int16 v1; // r8@1
  __int16 v2; // r7@1
  __int16 v3; // r6@1
  unsigned int v4; // r0@1
  unsigned int v5; // r4@1
  unsigned int v6; // r5@1
  int v8; // [sp+14h] [bp-4h]@0

  v0 = v202F7A4++;
  v1 = *v202F7A4;
  v2 = *(_BYTE *)(v202F7A4 + 1);
  v3 = *(_BYTE *)(v202F7A4 + 2);
  v202F7A4 = v0 + 4;
  v4 = CreateTask(task_p5_load_battle_screen_elements, 5) << 24;
  v5 = v4 >> 24;
  v6 = v4 >> 24;
  if ( sub_8076BE0() << 24 )
  {
    LOWORD(dword_3004B20[10 * v5 + 2]) = v3;
  }
  else if ( battle_side_get_owner(v202F7C9) << 24 )
  {
    LOWORD(dword_3004B20[10 * v6 + 2]) = v1;
  }
  else
  {
    LOWORD(dword_3004B20[10 * v5 + 2]) = v2;
  }
  v202F7C5 = 1;
  return v8;
}
