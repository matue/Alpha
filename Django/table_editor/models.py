from django.db import models


class Tab(models.Model):
    id = models.IntegerField(blank=False, null=False, primary_key=True)
    a = models.TextField(blank=False, null=False)
    b = models.TextField(blank=False, null=False)
    c = models.FloatField(blank=False, null=False)

    class Meta:
        managed = False
        db_table = 'tab'

