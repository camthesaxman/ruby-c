int sub_8080AE4()
{
  int v0; // r4@1
  int (*v1)(); // r1@2
  char v2; // r0@3
  signed __int16 v4; // [sp+0h] [bp-Ch]@1
  int v5; // [sp+8h] [bp-4h]@5

  PlayerGetDestCoords(&v4, &v4 + 1);
  v0 = (unsigned __int8)MapGridGetMetatileBehaviorAt(v4, *(&v4 + 1));
  if ( (unsigned __int8)sub_8056EAC(v0) == 1 )
  {
    v1 = sub_8080B9C;
  }
  else
  {
    v2 = sub_8056F08(v0);
    v1 = task_map_chg_seq_0807E2CC;
    if ( v2 == 1 )
      v1 = task_map_chg_seq_0807E20C;
  }
  CreateTask((int)v1, 10);
  return v5;
}
