from django.contrib import admin
from .models import *


class TableAdmin(admin.ModelAdmin):
    list_display = [field.name for field in Tab._meta.fields]
    search_fields = ['id']
    ordering = ['id']


admin.site.register(Tab, TableAdmin)
